> Binary Heap used in implementations of:

    	a.Heap Sort

    	b.Priority Queue

    Two Types:

    	a.Min Heap - Children always greater than equals to parent

    	b.Max Heap - Children always smaller than equals to parent

    Properties:

    	Binary Heap is a complete Binary Tree(stored as an array)

    Accessing Element:

    	left[i]=2*i+1
    	right[i]=2*i+2
    	parent[i]=floor((i-1)/2)

    Benefits:

    	a.Contigous Location

    	b.Random Access

    	c.Cache Friendly

    	d.Complete Binary Tree - minimum height of tree is there(space efficient)
