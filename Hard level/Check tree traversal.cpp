bool checktree(int preorder[], int inorder[], int postorder[], int n) 
    { 
    	// Your code goes here
    	if(n==0)
    	    return 1;
    	if(n==1)
    	    return (preorder[0]==inorder[0])&&(postorder[0]==inorder[0]);
    	int index=-1,f=0;
    	for(int i=0;i<n;i++){
    	    if(inorder[i]==preorder[0]){
    	        index=i;
    	        break;
    	    }
    	}
    	if(index!=-1){
    	    for(int i=0;i<n;i++){
    	       if(preorder[0]==postorder[i]){
    	           f=1;
    	           break;
    	       } 
    	    }
    	}
    	if(index==-1 || f==0)
    	    return 0;
    	bool r1=checktree(preorder+1,inorder,postorder,index);
    	bool r2=checktree(preorder+index+1,inorder+index+1,postorder+index,n-index-1);
    	return r1 && r2;
    } 
