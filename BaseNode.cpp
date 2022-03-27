#include "BaseNode.h"
#include <iostream>
#include <stack>

namespace
{
	std::stack<BaseNode*>stack;
}

BaseNode::BaseNode(const NodeName& name)
	: _name(name. _name)
{
	if (!stack.empty())
	{
		stack.top()->_children.push_back(this);
	}
	stack.push(this);
}

NodeName::NodeName(const char* name)
	: _name(name)
{
}

NodeName::NodeName(const std::string& name)
    :_name(name)
{
}

NodeName::~NodeName()
{
	stack.pop();
}
