/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSeenHeadView.h>

@class NSArray, NSString;

@interface MNSeenHeadListView : UIView <MNSeenHeadView> {

	unsigned long long _seenHeadSize;
	NSArray* _seenHeadViews;

}

@property (nonatomic,copy) NSArray * seenHeadViews;                        //@synthesize seenHeadViews=_seenHeadViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long seenHeadSize;              //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
-(void)setSeenHeadSize:(unsigned long long)arg1 ;
-(void)setSeenHeadViews:(NSArray *)arg1 ;
-(NSArray *)seenHeadViews;
-(unsigned long long)seenHeadSize;
-(void)_updateSeenHeadSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

