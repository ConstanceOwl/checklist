//
//  ChecklistItem.m
//  Checklists
//
//  Created by Constance Li on 1/7/15.
//  Copyright (c) 2015 GWrabbit. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

@synthesize text, checked;

- (void)toggleChecked
{
    self.checked = !self.checked;
}

@end
