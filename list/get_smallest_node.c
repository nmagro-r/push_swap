t_list  *get_smallest_node(t_list *stack)
{
    t_list *smallest = stack;

    while(stack)
    {
        if(stack->content < smallest->content)
            smallest = stack;
        stack = stack->next;
    }
    return(smallest);
}