//
//  AppDelegate.h
//  TextView
//
//  Created by Prashanth Rajagopalan on 6/26/13.
//  Copyright (c) 2013 prashanth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITextViewDelegate>
{
    UITextView *textViewT;
    NSMutableAttributedString *attr;
}
@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
