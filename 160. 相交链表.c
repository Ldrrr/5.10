struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	int lena=0,lenb=0,len;
	struct ListNode *a=headA;
	struct ListNode *b=headB;
	if(!a||!b) return NULL;
	while(a)
	{
		lena++;
		a=a->next;
	}
	a=headA;
	while(b)
	{
		lenb++;
		b=b->next;
	}
	b=headB;
	if(lena>lenb)
	{
		len=lena-lenb;
		while(len--)
		{
			a=a->next;
		}
	}
	else
	{
		len=lenb-lena;
		while(len--)
		{
			b=b->next;
		}
	}
	while(a&&b)
	{
		if(a==b) return a;
		a=a->next;
		b=b->next;
	}
	return NULL;
	
}
