#include<stdio.h>

struct Llist
{
   int data;
   
   struct Llist * next;

} ;


struct Llist * initList(void)  //��ʼ������
{
  
struct Llist * head;
head=(struct Llist *)malloc(sizeof(struct Llist));

 if(head==NULL) exit(1);
 head->next=NULL;
 return head;

}

/*===========================================
�������ܣ��������������β�巨��������
�������룺���ֵ���飬������
��������������ͷָ��
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

/*  ������������*/
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
�������ܣ����������������ָ��λ�ú������
�������룺������ַ�����ֵ
�����������
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
�������ܣ��������������ɾ��ָ�����ĺ�̽��
�������룺ָ������ַ
�����������ɾ������ַ
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

   insert(k,90);// �ڲ��ҵ�������Ԫ�غ�߲���90

 PrintList(head);
  dell(k);

 PrintList(head);

}
