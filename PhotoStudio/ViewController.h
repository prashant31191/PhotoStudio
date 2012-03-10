//
//  ViewController.h
//  PhotoStudio
//
//  Created by Xavier BENAVENT on 3/3/12.
//  Copyright (c) 2012 LECB 2. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GroupsTableViewController.h"
#import "ElementSTVC.h"
#import "Project.h"
#import "ProjetcsTableViewController.h"
#import "LabelElement.h"

@interface ViewController : UIViewController <ElementSTVCDelegate,ElementViewDelegate,ProjectsTableViewControllerDelegate>

@end
