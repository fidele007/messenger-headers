/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMPhotoQuality : FBValueObject <NSCopying> {

	double _maxDimension;
	double _compressionQuality;

}

@property (nonatomic,readonly) double maxDimension;                    //@synthesize maxDimension=_maxDimension - In the implementation block
@property (nonatomic,readonly) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
-(double)maxDimension;
-(id)initWithMaxDimension:(double)arg1 compressionQuality:(double)arg2 ;
-(double)compressionQuality;
@end

