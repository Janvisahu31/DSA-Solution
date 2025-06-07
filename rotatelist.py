def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        if not head or k == 0:
            return head
            
        length = 1
        tail = head
        while tail.next:
            tail = tail.next
            length += 1

        k = k % length
        if k == 0:
            return head

        tail.next = head 
        steps_to_new_head = length - k
        new_tail = tail
        while steps_to_new_head:
            new_tail = new_tail.next
            steps_to_new_head -= 1

        new_head = new_tail.next
        new_tail.next = None
        return new_head
        
