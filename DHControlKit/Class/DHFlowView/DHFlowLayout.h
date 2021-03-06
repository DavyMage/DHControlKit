//
//  DHFlowLayout.h
//  DHControlKit
//
//  Created by daixinhui on 2018/12/14.
//  Copyright © 2018 代新辉. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DHFlowUtils.h"

NS_ASSUME_NONNULL_BEGIN

@interface DHFlowLayout : UICollectionViewFlowLayout

- (instancetype)initWithFlowUtils:(DHFlowUtils *)flowUtils;

@end

NS_ASSUME_NONNULL_END
