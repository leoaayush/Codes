insertion(struct node * root,int data)
{
	if(root==NULL)
		root=getnode(data);
	else
	{
		if(root->data<=data)
			root->left=insert(root->left,data);
			else
				root->right=insert(root->right,data);
	}
	return root;
}
deletion(struct node * root,int data)
{
	struct node * succ,*tmp;
	if(root==NULL)
	{
		printf("Data not found\n");
		return root;
	}
	if(data<root->data)
		root->left=deletion(root->left,data);
		else if(data>root->data)
		{
			root->right=deletion(root->right,data);
		}
		else
		{
			if(root->right!=NULL && root->left!=NULL)
				{succ=root->right
				while(succ->left)
					succ=succ->left;
					root->data=succ->data;
					root->right=deletion(root->right,succ->data);
				}
				else
				{
					tmp=root;
					if(root->right!=NULL)
						root=root->right;
						else if(root->left!=NULL)
							root=root->left;
							else
								root=NULL

