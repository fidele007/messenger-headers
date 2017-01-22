/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBWebPImage : NSObject {

	BOOL _isAnimated;
	unsigned long long _loopCount;
	double _frameDuration;
	double _scale;
	NSArray* _frames;
	CGSize _size;

}

@property (nonatomic,readonly) BOOL isAnimated;                           //@synthesize isAnimated=_isAnimated - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;              //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double frameDuration;                      //@synthesize frameDuration=_frameDuration - In the implementation block
@property (nonatomic,readonly) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain,readonly) NSArray * frames;                   //@synthesize frames=_frames - In the implementation block
-(unsigned long long)loopCount;
-(CGSize)size;
-(double)scale;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(BOOL)isAnimated;
-(double)frameDuration;
-(NSArray *)frames;
@end
