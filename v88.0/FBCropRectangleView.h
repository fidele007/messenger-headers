/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@interface FBCropRectangleView : UIView {

	int _style;
	BOOL _shouldDrawInnerGrid;
	double _boundsInsetFromCrop;

}

@property (assign,nonatomic) double boundsInsetFromCrop;              //@synthesize boundsInsetFromCrop=_boundsInsetFromCrop - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawInnerGrid;                //@synthesize shouldDrawInnerGrid=_shouldDrawInnerGrid - In the implementation block
-(void)setBoundsInsetFromCrop:(double)arg1 ;
-(void)setShouldDrawInnerGrid:(BOOL)arg1 ;
-(double)boundsInsetFromCrop;
-(BOOL)shouldDrawInnerGrid;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
@end
