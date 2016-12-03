/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAirlinesHeaderViewModel, MNBusinessStackedContainerViewModel;

@interface MNAirlinesItineraryDetailViewModel : FBValueObject <NSCopying> {

	MNAirlinesHeaderViewModel* _headerViewModel;
	MNBusinessStackedContainerViewModel* _flightAndPassengerInfoSection;
	MNBusinessStackedContainerViewModel* _summaryInfo;

}

@property (nonatomic,copy,readonly) MNAirlinesHeaderViewModel * headerViewModel;                                      //@synthesize headerViewModel=_headerViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * flightAndPassengerInfoSection;              //@synthesize flightAndPassengerInfoSection=_flightAndPassengerInfoSection - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * summaryInfo;                                //@synthesize summaryInfo=_summaryInfo - In the implementation block
-(MNAirlinesHeaderViewModel *)headerViewModel;
-(id)initWithHeaderViewModel:(id)arg1 flightAndPassengerInfoSection:(id)arg2 summaryInfo:(id)arg3 ;
-(MNBusinessStackedContainerViewModel *)flightAndPassengerInfoSection;
-(MNBusinessStackedContainerViewModel *)summaryInfo;
@end

