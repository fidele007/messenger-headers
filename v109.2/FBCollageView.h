/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface FBCollageView : UIView {

	NSArray* _items;
	CGSize _innerPadding;

}

@property (nonatomic,copy,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) CGSize innerPadding;               //@synthesize innerPadding=_innerPadding - In the implementation block
+(double)heightForItems:(id)arg1 width:(double)arg2 ;
+(CGSize)availableSizeForItems:(id)arg1 ;
+(CGRect)frameForItem:(id)arg1 availableSize:(CGSize)arg2 size:(CGSize)arg3 innerPadding:(CGSize)arg4 ;
+(id)framesForItems:(id)arg1 width:(double)arg2 innerPadding:(CGSize)arg3 ;
-(CGSize)innerPadding;
-(void)setInnerPadding:(CGSize)arg1 ;
-(CGSize)_availableItemSize;
-(id)initWithItems:(id)arg1 innerPadding:(CGSize)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)items;
@end

