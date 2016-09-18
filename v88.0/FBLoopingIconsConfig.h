/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBLoopingIconsConfig : FBValueObject <NSCopying> {

	BOOL _shouldLoopInfinitely;
	NSArray* _loopThroughImages;
	NSArray* _highLightedImages;
	unsigned long long _numberOfLoops;
	double _delayForDefaultImage;
	double _delayForOtherImages;

}

@property (nonatomic,copy,readonly) NSArray * loopThroughImages;              //@synthesize loopThroughImages=_loopThroughImages - In the implementation block
@property (nonatomic,copy,readonly) NSArray * highLightedImages;              //@synthesize highLightedImages=_highLightedImages - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoops;              //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
@property (nonatomic,readonly) double delayForDefaultImage;                   //@synthesize delayForDefaultImage=_delayForDefaultImage - In the implementation block
@property (nonatomic,readonly) double delayForOtherImages;                    //@synthesize delayForOtherImages=_delayForOtherImages - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoopInfinitely;                     //@synthesize shouldLoopInfinitely=_shouldLoopInfinitely - In the implementation block
-(id)initWithLoopThroughImages:(id)arg1 highLightedImages:(id)arg2 numberOfLoops:(unsigned long long)arg3 delayForDefaultImage:(double)arg4 delayForOtherImages:(double)arg5 shouldLoopInfinitely:(BOOL)arg6 ;
-(NSArray *)loopThroughImages;
-(NSArray *)highLightedImages;
-(double)delayForDefaultImage;
-(double)delayForOtherImages;
-(BOOL)shouldLoopInfinitely;
-(unsigned long long)numberOfLoops;
@end
