/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBButtonConfig *)actionButtonConfig;
-(CGSize)calculateNodeSizeWithConstrainingSize:(CGSize)arg1 ;
-(CGSize)maxActionButtonSize;
-(double)buttonHorizontalMargin;
-(double)buttonVerticalMargin;
-(CGSize)calculateNodeSizeWithActionButtonSize:(CGSize)arg1 constrainedSize:(CGSize)arg2 ;
-(id)actionButtonTextFont;
@end

