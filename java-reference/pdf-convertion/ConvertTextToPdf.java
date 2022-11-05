import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.pdfbox.pdmodel.PDDocument;
import org.apache.pdfbox.pdmodel.PDPage;
import org.apache.pdfbox.pdmodel.PDPageContentStream;
import org.apache.pdfbox.pdmodel.font.PDFont;
import org.apache.pdfbox.pdmodel.font.PDType1Font;
import org.apache.pdfbox.pdmodel.common.PDRectangle;


public class ConvertTextToPdf {
  // Text file that has to be converted
  public static final String SOURCE_FILE = "C:\\Gowtham\\src\\CSCF0003.ZZZ.txt";
  public static final String CREATED_PDF = "C:\\Gowtham\\src\\CSCF0003.ZZZ.pdf";
  static double currentHeight = 0;
  static PDPageContentStream cs = null;
  public static void main(String[] args) {
    try {
      PDDocument pdfDoc = new PDDocument();
      // for text file
      BufferedReader br = new BufferedReader(new FileReader(SOURCE_FILE));
      PDPage page = new PDPage(PDRectangle.A3);
      // add page to the PDF document
      pdfDoc.addPage(page);
      String line;
      cs = new PDPageContentStream(pdfDoc, page);
      cs.beginText();
      cs.setFont(PDType1Font.TIMES_ROMAN, 12);
      cs.newLineAtOffset(20, 750);
      cs.setLeading(12);
      // Read text file line by line
      while ((line = br.readLine()) != null) {
        System.out.println("Line-- " + line);
        showMultiLineText(pdfDoc, line, 20, 750, 580, 820, page, PDType1Font.TIMES_ROMAN, 15);				
      }				
      if(cs != null) {
        cs.endText();
        cs.close();
      }
      pdfDoc.save(CREATED_PDF);
      br.close();
      pdfDoc.close();
    } catch (IOException e) {
      // TODO Auto-generated catch block
      e.printStackTrace();
    }
  }
	
  /**
   * 
   * @param pdfDoc
   * @param text
   * @param x
   * @param y
   * @param allowedWidth - allowed width for the line before content goes to next line
   * @param allowedHeight - Allowed height for the page before another page is added
   * @param page
   * @param font
   * @param fontSize
   * @throws IOException
   */
  private static void showMultiLineText(PDDocument pdfDoc, String text, int x, int y, int allowedWidth, double allowedHeight, PDPage page, PDFont font, int fontSize) throws IOException {
    List<String> lines = new ArrayList<String>();
    String line = "";
    // split the text on spaces
    String[] words = text.split(" ");
    for(String word : words) {
      if(!line.isEmpty()) {
        line += " ";
      }
      // check if adding the word to the line surpasses the width of the page
      int size = (int) (fontSize * font.getStringWidth(line + word) / 1000);
      if(size > allowedWidth) {
        // if line + word surpasses the width of the page, add the line without the current word
        lines.add(line);
        // start new line with the current word
        line = word;
      } else {
        // if line + word fits the page width, add the current word to the line
        line += word;
      }
    }
    lines.add(line);

    for(String ln : lines) {
      System.out.println("Line- " + ln); 
      // for each line add line height to current height 
      // line height = 1.2 * fontSize is taken here 
      currentHeight = currentHeight + 1.2 * fontSize;
      System.out.println("currentHeight " + currentHeight);

      if(currentHeight >= allowedHeight) {
        System.out.println("adding new page " + currentHeight);
        // When current height is more than allowed height for the page
        // create a new page
        page = new PDPage(PDRectangle.A3);
        // add page to the PDF document
        pdfDoc.addPage(page);
        // reset currentHeight
        currentHeight = 0;
        cs.endText();
        cs.close();
        cs = new PDPageContentStream(pdfDoc, page);
        cs.beginText();
        cs.setFont(PDType1Font.TIMES_ROMAN, 12);
        cs.newLineAtOffset(20, 750);
        cs.setLeading(12);
      }
      cs.showText(ln);
      cs.newLine();  
    }
  }
}