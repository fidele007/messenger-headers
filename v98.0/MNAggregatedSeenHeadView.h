/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAnimationActionOverriding.h>
#import <Messenger/MNSeenHeadView.h>

@class UIImageView, FBRichTextView, MNSeenHeadActionOverrider, NSString;

@interface MNAggregatedSeenHeadView : UIView <MNAnimationActionOverriding, MNSeenHeadView> {

	UIImageView* _backgroundImageView;
	FBRichTextView* _label;
	MNSeenHeadActionOverrider* _seenHeadActionOverrider;
	unsigned long long _seenHeadSize;
	unsigned long long _numberOfSeenHeads;

}

@property (assign,nonatomic) unsigned long long numberOfSeenHeads;              //@synthesize numberOfSeenHeads=_numberOfSeenHeads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long seenHeadSize;                   //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
+(CGSize)sizeForNumberOfSeenHeads:(unsigned long long)arg1 andSeenHeadSize:(unsigned long long)arg2 ;
-(void)setSeenHeadSize:(unsigned long long)arg1 ;
-(id)initWithUsesManhattanPath:(BOOL)arg1 ;
-(BOOL)shouldOverrideActionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)actionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 andTemplateAnimation:(id)arg4 ;
-(unsigned long long)seenHeadSize;
-(void)setNumberOfSeenHeads:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSeenHeads;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateLabel;
-(void)_updateBackground;
@end
