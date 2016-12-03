/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNDetectedData, MNDetectedDataViewModel;

@interface MNTextDataDetectionResult : FBValueObject <NSCopying> {

	MNDetectedData* _detectedData;
	MNDetectedDataViewModel* _detectedDataViewModel;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                                                     //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) MNDetectedData * detectedData;                                //@synthesize detectedData=_detectedData - In the implementation block
@property (nonatomic,copy,readonly) MNDetectedDataViewModel * detectedDataViewModel;              //@synthesize detectedDataViewModel=_detectedDataViewModel - In the implementation block
-(MNDetectedData *)detectedData;
-(id)initWithRange:(NSRange)arg1 detectedData:(id)arg2 detectedDataViewModel:(id)arg3 ;
-(MNDetectedDataViewModel *)detectedDataViewModel;
-(NSRange)range;
@end
