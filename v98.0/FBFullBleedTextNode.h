/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSmartClippingTextNode.h>

@interface FBFullBleedTextNode : FBSmartClippingTextNode {

	UIEdgeInsets _textInsets;

}

@property (nonatomic,readonly) CGSize calculatedTextSize; 
@property (nonatomic,readonly) CGRect textFrame; 
+(CGSize)textSizeWithAttributedString:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(CGSize)calculatedTextSize;
-(double)_heightInflation;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(CGRect)textFrame;
@end

