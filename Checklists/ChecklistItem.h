//
//  ChecklistItem.h
//  Checklists
//
//  Created by Constance Li on 1/7/15.
//  Copyright (c) 2015 GWrabbit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

- (void)toggleChecked;

@end
