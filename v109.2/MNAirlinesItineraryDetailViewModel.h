/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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

