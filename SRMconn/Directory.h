//
//  Directory.h
//  SRMconn
//
//  Created by Naman Maheshwari on 07/02/16.
//  Copyright © 2016 Naman Maheshwari. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Directory : UIViewController<UITableViewDelegate, UITableViewDataSource>{
    NSArray *directoryData;
}
@property (strong, nonatomic) IBOutlet UITableView *DirectoryTable;

@end
