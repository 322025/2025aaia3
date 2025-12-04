//week13-2b.cpp 學習計畫 Linked List 第1選
//21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //練習寫寫看 資料結構 怎麼寫程式
        ListNode*ans= new ListNode(999);
        ListNode*ans2= ans;//ans2幫忙ans把尾巴接好
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){//左邊小 先接左邊
                ans2->next=list1;//接起來
                list1=list1->next;//往右下一筆
                ans2= ans2->next;//往右下一筆
            }else{
                ans2->next=list2;//接起來
                list2=list2->next;//往右下一筆
                ans2=ans2->next;//往右下一筆
            }
        }
        //還沒寫完 但試試看答案是什麼
        if(list1 !=nullptr) ans2->next=list1;
        if(list2 !=nullptr) ans2->next=list2;
        return ans->next;
    }
};
