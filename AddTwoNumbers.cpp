#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *c1 = l1;
        ListNode *c2 = l2;
        ListNode *sentinel = new ListNode(0);
        ListNode *d = sentinel;
        int sum = 0;
        while (c1 != NULL || c2 != NULL) {
            sum /= 10;
            if (c1 != NULL) {
                sum += c1->val;
                c1 = c1->next;
            }
            if (c2 != NULL) {
                sum += c2->val;
                c2 = c2->next;
            }
            d->next = new ListNode(sum % 10);
            d = d->next;
        }
        if (sum / 10 == 1)
            d->next = new ListNode(1);
        return sentinel->next;
    }
};
int main(int argc,char *argv[]){
	struct ListNode *ll = new ListNode(1);
	struct ListNode *rr = new ListNode(1);
	Solution s;
	struct ListNode re = s.addTwoNumbers(ll,rr);
	while(re)
	{
		cout<<re.val<<endl;
		re=re->next;
	} 
}
