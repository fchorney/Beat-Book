//
//  rolloutMasterViewController.h
//  Beat Book
//
//  Created by Fernando Chorney on 11/26/2013.
//  Copyright (c) 2013 Fernando Chorney. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface rolloutMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
