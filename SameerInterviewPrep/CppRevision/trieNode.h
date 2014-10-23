class trieNode
{
private:
	char value;
	bool isBreakPoint;
public:
	trieNode *children[26];
	trieNode()
	{
		for(int i=0;i<26;i++)
		{
			children[i] = NULL;
		}
		isBreakPoint = false;
	}

	trieNode(char valueI)
	{
		value = valueI;
		for(int i=0;i<26;i++)
		{
			children[i] = NULL;
		}
		isBreakPoint = false;
	}

	char getValue()
	{
		return value;
	}

	void setBreakPoint()
	{
		isBreakPoint = true;
	}

	bool getBreakPoint()
	{
		return isBreakPoint;
	}
};