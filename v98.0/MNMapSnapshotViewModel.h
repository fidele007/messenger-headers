/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MNMapSnapshotViewModel : FBValueObject <NSCopying> {

	BOOL _drawPin;
	double _latitude;
	double _longitude;
	double _latitudeSpan;
	double _longitudeSpan;
	NSNumber* _specificSize;

}

@property (nonatomic,readonly) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitudeSpan;                       //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (nonatomic,readonly) double longitudeSpan;                      //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) BOOL drawPin;                              //@synthesize drawPin=_drawPin - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * specificSize;              //@synthesize specificSize=_specificSize - In the implementation block
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 latitudeSpan:(double)arg3 longitudeSpan:(double)arg4 drawPin:(BOOL)arg5 specificSize:(id)arg6 ;
-(NSNumber *)specificSize;
-(double)latitudeSpan;
-(double)longitudeSpan;
-(BOOL)drawPin;
-(double)latitude;
-(double)longitude;
@end
