class TrieNode
{
public:
	char value;
	TrieNode* children[26];

	TrieNode()
	{
 	 value=0;
 	 for(unsigned int i=0;i<26;i++)
 	 {
 	 	children[i] = NULL;
 	 }
	}

	TrieNode(char valueI)
	{
		value = valueI;
		for(unsigned int i=0;i<26;i++)
 	 	{
 	 	 children[i] = NULL;
 	 	}
	}

	~TrieNode()
	{

	}

	char getValue()
	{
		return value;
	}
};