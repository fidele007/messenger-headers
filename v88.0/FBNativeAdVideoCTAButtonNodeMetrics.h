/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBButtonConfig, PAInterfaceGuide;

@interface FBNativeAdVideoCTAButtonNodeMetrics : NSObject {

	FBButtonConfig* _buttonConfig;
	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) FBButtonConfig * actionButtonConfig; 
@property (nonatomic,readonly) CGSize maxActionButtonSize; 
@property (nonatomic,readonly) double buttonVerticalMargin; 
@property (nonatomic,readonly) double buttonHorizontalMargin; 
-(FBButtonConfig *)actionButtonConfig;
-(CGSize)calculateNodeSizeWithConstrainingSize:(CGSize)arg1 ;
-(CGSize)maxActionButtonSize;
-(double)buttonHorizontalMargin;
-(double)buttonVerticalMargin;
-(CGSize)calculateNodeSizeWithActionButtonSize:(CGSize)arg1 constrainedSize:(CGSize)arg2 ;
-(id)actionButtonTextFont;
-(id)initWithInterfaceGuide:(id)arg1 ;
@end

