#include<stdio.h>

struct Llist
{
   int data;
   
   struct Llist * next;

} ;


struct Llist * initList(void)  //初始化链表
{
  
struct Llist * head;
head=(struct Llist *)malloc(sizeof(struct Llist));

 if(head==NULL) exit(1);
 head->next=NULL;
 return head;

}

/*===========================================
函数功能：单链表操作——尾插法建立链表
函数输入：结点值数组，结点个数
函数输出：链表的头指针
=============================================*/
struct Llist * CreateList(int a[],int n ) 
{   
    struct  Llist *head,*p, *q;
      int i;

      head=(struct Llist *)malloc(sizeof(struct Llist )); 
      q=head;                    
      for(i=0;i<n;i++) 
     {  
          p=(struct Llist *)malloc(sizeof(struct Llist)); 
          p->data=a[i];             
          q->next=p;                
          q=p;                      
     }  
      p->next=NULL;
      return head; 
}

/*  输出链表的内容*/
void  PrintList(struct Llist *head)
{ 
	
	struct Llist *p;
	
      if (head==NULL)
          exit(1);
	  else
		 p=head->next;
	  while(p!=NULL)
	  {
	      printf("%d   -->",p->data);
		   p=p->next;
	  }

	  if (p==NULL)
		  printf("end\n");
}


struct Llist  * serch( struct Llist  * head , int data )
{

     struct Llist  * p;
	 
	   p=head->next;
	 while(p!=NULL)
	 {
	    if(p->data==data)
			return p;
		else
			p=p->next;
	 
	 }
    if(p==NULL)
		return NULL;


}



/*===========================================
函数功能：单链表操作——在指定位置后插入结点
函数输入：插入点地址，结点值
函数输出：无
=============================================*/
void  insert(struct Llist *Ptr,int  data)  
{ 
 struct  Llist  *s;
  s=(struct Llist *)malloc(sizeof(struct Llist));
  s->data=data;
  s->next=Ptr->next;
  Ptr->next=s;
}


/*===========================================
函数功能：单链表操作——删除指定结点的后继结点
函数输入：指定结点地址
函数输出：被删除结点地址
=============================================*/
struct Llist * del( struct Llist *Ptr)
{struct  Llist *fPtr;
  fPtr=Ptr->next;
  Ptr->next=fPtr->next; 
return fPtr;
}

void dell( struct Llist *Ptr)
{struct  Llist *fPtr;
  fPtr=Ptr->next;
  Ptr->next=fPtr->next; 
 // return fPtr;
}




void main(){

	int a[10]={1,2,3,4,5,6,7,8,9,0};
    int data;

    struct Llist *head,*k;

	head=CreateList( a, 10 );

     PrintList(head);


  printf("please input data\n");
  scanf("%d",&data);

 k=serch(head,data);

   insert(k,90);// 在查找到的链表元素后边插入90

 PrintList(head);
  dell(k);

 PrintList(head);

}
