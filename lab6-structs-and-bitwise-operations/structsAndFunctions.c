#include <stdio.h>
#include <string.h>

//Define box struct
struct box 
{
    int itemnum;
    char color[20];
    int height;
    int width;
    int depth;
    float x;
    float y;
    float z;
};

//Function to calculate volume
float volume(struct box box)
{
    return box.height * box.width * box.depth;
    
}

//Function to return larger box
struct box greater_volume(struct box box1, struct box box2)
{
    if(volume(box1) > volume(box2))
    {
        box1.x = 0;
        box1.y = 0;
        box1.z = 0;
        strcpy(box1.color, "green");
        return box1;
    }
    else
    {
        box2.x = 0;
        box2.y = 0;
        box2.z = 0;
        strcpy(box2.color, "green");
        return box2;
    }
}

int main()
{
    struct box box1 = {1, "red", 3, 12, 4, 10.0, 20.0, 30.0};
    struct box box2 = {2, "blue", 4, 3, 2, 15.0, 25.0, 35.0};

    struct box biggerBox = greater_volume(box1, box2);


    printf("Bigger Box is Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f)\n",
           biggerBox.itemnum, biggerBox.color, biggerBox.x, biggerBox.y, biggerBox.z);
    printf("Height: %d, Width: %d, Depth: %d\n",
           biggerBox.height, biggerBox.width, biggerBox.depth);

    return 0;
}

