/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBSmartClippingTextNode;

@interface FBEmailCTASelectionButton : ASControlNode {

	FBSmartClippingTextNode* _emailTextNode;
	FBSmartClippingTextNode* _changeLabelTextNode;

}

@property (nonatomic,readonly) FBSmartClippingTextNode * emailTextNode;                    //@synthesize emailTextNode=_emailTextNode - In the implementation block
@property (nonatomic,readonly) FBSmartClippingTextNode * changeLabelTextNode;              //@synthesize changeLabelTextNode=_changeLabelTextNode - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setEmailText:(id)arg1 ;
-(FBSmartClippingTextNode *)emailTextNode;
-(FBSmartClippingTextNode *)changeLabelTextNode;
-(id)init;
-(void)layout;
@end

