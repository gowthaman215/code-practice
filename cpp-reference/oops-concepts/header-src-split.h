#ifndef _header_src_split_h
#define _header_src_split_h
class XYZ
{
	private:
		int xyz;

	public:
		XYZ();
		XYZ(int abc);
		XYZ(XYZ &ref_obj);

		int getXYZ();
		void putXYZ(int abc);

		~XYZ();

};
#endif //_header_src_split_h
