/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface MNBusinessMapViewModel : FBValueObject <NSCopying> {

	double _latitude;
	double _longitude;
	UIImage* _pinImage;
	double _height;
	CGPoint _pinCenterOffset;

}

@property (nonatomic,readonly) double latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) UIImage * pinImage;              //@synthesize pinImage=_pinImage - In the implementation block
@property (nonatomic,readonly) CGPoint pinCenterOffset;              //@synthesize pinCenterOffset=_pinCenterOffset - In the implementation block
@property (nonatomic,readonly) double height;                        //@synthesize height=_height - In the implementation block
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 pinImage:(id)arg3 pinCenterOffset:(CGPoint)arg4 height:(double)arg5 ;
-(UIImage *)pinImage;
-(CGPoint)pinCenterOffset;
-(double)height;
-(double)latitude;
-(double)longitude;
@end

