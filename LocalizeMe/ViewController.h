//
//  ViewController.h
//  LocalizeMe
//
//  Created by Vasilii on 16.07.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *localeLabel;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *labels;

@end

