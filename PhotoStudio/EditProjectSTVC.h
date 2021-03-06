//
//  EditProjectSTVC.h
//  PhotoStudio
//
//  Created by Xavier BENAVENT on 3/7/12.
//  Copyright (c) 2012 LECB 2. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Project.h"
#import "ImageHelper.h"
#import "Element.h"

@class EditProjectSTVC;
@protocol EditProjectSTVCDelegate
- (void)projectDidFinishEditing:(Project *)project;
@end

@interface EditProjectSTVC : UITableViewController

@property (nonatomic, weak) id <EditProjectSTVCDelegate> delegate;
@property (nonatomic, strong) Project *editingProject;

@end
