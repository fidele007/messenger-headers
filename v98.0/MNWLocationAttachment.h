/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNWLocationAttachment : FBValueObject <NSCopying, NSCoding> {

	NSString* _locationTitle;
	NSString* _locationSubtitle;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy,readonly) NSString * locationTitle;                 //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSubtitle;              //@synthesize locationSubtitle=_locationSubtitle - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
-(NSString *)locationTitle;
-(id)initWithLocationTitle:(id)arg1 locationSubtitle:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 ;
-(NSString *)locationSubtitle;
-(double)latitude;
-(double)longitude;
@end

