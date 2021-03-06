/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FBNativeAdPlaceholderNodeMetrics : NSObject

@property (nonatomic,readonly) UIEdgeInsets adNodePadding; 
@property (nonatomic,readonly) UIEdgeInsets contentNodeRedesignPadding; 
@property (nonatomic,readonly) double hairlineBoxLineWeight; 
@property (nonatomic,readonly) UIColor * hairlineBoxColor; 
@property (nonatomic,readonly) UIColor * borderlineBoxColor; 
-(CGSize)defaultImageSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)hairlineBoxLineWeight;
-(UIColor *)hairlineBoxColor;
-(UIColor *)borderlineBoxColor;
-(CGSize)defaultContentNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)calculateNodeSizeWithContentNodeSize:(CGSize)arg1 constrainedSize:(CGSize)arg2 ;
-(UIEdgeInsets)adNodePadding;
-(UIEdgeInsets)contentNodeRedesignPadding;
-(CGSize)defaultIconSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)defaultNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)maxNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)maxRedesignNodeSizeWithConstrainedSize:(CGSize)arg1 ;
@end

