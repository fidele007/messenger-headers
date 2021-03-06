/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKenBurnsSlide.h>
#import <Messenger/FBWebImageViewListener.h>

@protocol FBKenBurnsSlideDelegate;
@class FBWebImageView, NSValue, NSString;

@interface FBBurstKenBurnsImageViewSlide : UIView <FBKenBurnsSlide, FBWebImageViewListener> {

	FBWebImageView* _imageView;
	NSValue* _focusPointValue;
	BOOL _shouldAlwaysZoomIn;
	id<FBKenBurnsSlideDelegate> _slideDelegate;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index;                                    //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBKenBurnsSlideDelegate> slideDelegate;              //@synthesize slideDelegate=_slideDelegate - In the implementation block
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2 ;
-(id<FBKenBurnsSlideDelegate>)slideDelegate;
-(BOOL)kenBurnsSlideIsReady;
-(id)kenBurnsSlideFocusPoint;
-(BOOL)kenBurnsSlideShouldZoomIn;
-(void)setSlideDelegate:(id<FBKenBurnsSlideDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 index:(unsigned long long)arg2 specifier:(id)arg3 imageSpecifier:(id)arg4 ;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned long long)index;
-(void)_prepare;
@end

