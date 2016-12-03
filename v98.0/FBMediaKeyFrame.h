/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMediaKeyFrame : NSObject <NSCopying> {

	double _zoomScale;
	CGPoint _centerPoint;

}

@property (assign,nonatomic) CGPoint centerPoint;              //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) double zoomScale;                 //@synthesize zoomScale=_zoomScale - In the implementation block
-(CGPoint)photoOffsetForViewportSize:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(CGPoint)centerPoint;
-(void)setCenterPoint:(CGPoint)arg1 ;
@end

