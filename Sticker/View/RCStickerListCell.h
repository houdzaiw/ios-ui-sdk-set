//
//  RCStickerListCell.h
//  RongSticker
//
//  Created by Zhaoqianyu on 2018/8/20.
//  Copyright © 2018年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCStickerPackage.h"

@protocol RCStickerListCellDelegate <NSObject>

- (void)onDeletePackage:(NSString *)packageId;

@end

@interface RCStickerListCell : UITableViewCell

@property (nonatomic, weak) id<RCStickerListCellDelegate> delegate;

- (void)configWithModel:(RCStickerPackage *)package;

@end
