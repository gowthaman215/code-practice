#include <bits/stdc++.h>
using namespace std;
#define ALBHABET_SIZE 26
class trie
{
	private:
		trie* CHILDREN[ALBHABET_SIZE];
		bool end;

	protected:

	public:
		trie()
		{
			for(int i=0; i<ALBHABET_SIZE; i++)
			{
				CHILDREN[i] = nullptr;
				end = false;
			}
		}
		
		trie* getTrieNode()
		{
			trie* temp = new trie();
			for(int i=0; i<ALBHABET_SIZE; i++)
			{
				temp->CHILDREN[i] = nullptr;
			}
			temp->end = false;
                        return temp;
		}

		void insert(string data)
		{
			trie* spider = this;
			for(int i=0; i<data.size(); i++)
			{
				int index = data[i] - 'a';
				if(spider->CHILDREN[index] == nullptr)
					spider->CHILDREN[index] = getTrieNode();
			        spider = spider->CHILDREN[index];	
			        	
			}

			spider->end = true;

		}
		
		void printTrie()
		{

			trie* spider = this;
			char ch;
			trie* child = nullptr;
			while(spider != nullptr)
			{
				for(int index=0; index<ALBHABET_SIZE; index++)
				{
					if(spider->CHILDREN[index] != nullptr)
					{       
						ch = index + 'a';
						cout << ch ;
						child = spider->CHILDREN[index];
					}
					else
						cout << "*";
				}
				cout << endl;

				if (child != nullptr)
					spider = child;
				else
					spider = nullptr;
				child = nullptr;

                        }
			
		}

		void printTrieData(string data)
		{
			trie* spider = this;
			trie* child = nullptr;
			int i=0;
			while(spider != nullptr)
			{
				int index = (data[i]-'a');
				
				for(int k=0; k<ALBHABET_SIZE; k++)
				{
					if(spider->CHILDREN[index] != nullptr && k==index) 
					{
						cout << data[i];
						child = spider->CHILDREN[index];
					}
					else
					{
						cout << "*";
					}

				}
				
				cout << endl;

				if(child != nullptr)
				{
					spider = child;
					child = nullptr;
					i++;
				}
				else
				{
					spider = nullptr;
				}
			}
			
		}

		bool search(string data)
		{
			trie* spider = this;
			for(int i=0; i<data.length(); i++)
			{
				int index = data[i] - 'a'; 
				if(spider->CHILDREN[index] == nullptr) 
					return false;
				spider = spider->CHILDREN[index];
			}
		        if(spider->end == true)
			{
				cout << "word completed" << endl;
			}	
			else
			{
				cout << "word not completed" << endl;
			}
			return spider->end;
		}
		
		bool autoSuggest(string data, vector<string>& suggestions)
		{
			trie* spider = this;
			for(int i=0; i<data.size(); i++)
			{
				int index = (data[i]-'a');
				if(spider->CHILDREN[index] == nullptr) 
					return false;
				spider = spider->CHILDREN[index];
			}

			getAllSuggestion(spider, data, suggestions);
			return true;
		}

		void getAllSuggestion(trie *root, string prefix, vector<string>& suggesstions)
		{
			if(root->end)
				suggesstions.push_back(prefix);
			for (int i = 0; i < ALBHABET_SIZE; i++)
			{
				if(root->CHILDREN[i] != nullptr)
				{
					char suffix = 'a' + i;
					getAllSuggestion(root->CHILDREN[i], prefix+suffix, suggesstions);
				}
			}

		}
};
int main()
{
	trie t;
	vector<string> suggesstions;
	t.insert("gowtham");
	t.insert("gow");
	t.insert("gowt");
	t.insert("gowthu");
	t.insert("gowthaman");
	t.insert("hell");
	t.insert("zoom");
	t.printTrie();

	cout << endl << "=====================" << endl;
	if(t.search("gowtham"))
		cout << "found" << endl;
	else
		cout << "not found" << endl;
	cout << endl << "=====================" << endl;
	t.printTrieData("gowtho");

	cout << endl << "=====================" << endl;
	t.autoSuggest("gowt",suggesstions); 
        for_each(suggesstions.begin(), suggesstions.end(), [](string word){cout<<word<<endl;});	
	cout << endl << "=====================" << endl;
	t.printTrieData("gowt");

	cout << endl << "=====================" << endl;
	cout << endl << "=====================" << endl;
	t.printTrieData("gowtham");

	cout << endl << "=====================" << endl;


	string keys[] = { "the", "a", "there",
                      "answer", "any", "by",
                      "bye", "their", "hero", "heroplane" };
	for (int i = 0; i < n; i++)
        	t.insert(keys[i]);
	//t.remove();
	return 0;
}
