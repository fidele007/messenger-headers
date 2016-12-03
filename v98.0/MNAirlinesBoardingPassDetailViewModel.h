/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessStackedContainerViewModel, MNAirlinesFlightInfoSectionViewModel, MNBusinessImageViewModel, MNBusinessLabelViewModel, UIColor, NSString, FBMMessage, NSArray;

@interface MNAirlinesBoardingPassDetailViewModel : FBValueObject <NSCopying> {

	MNBusinessStackedContainerViewModel* _doubleImageHeaderViewModel;
	MNBusinessStackedContainerViewModel* _passengerAndOptionalFieldViewModel;
	MNAirlinesFlightInfoSectionViewModel* _flightInfoSectionViewModel;
	MNBusinessStackedContainerViewModel* _firstRowFieldsViewModel;
	MNBusinessStackedContainerViewModel* _secondRowFieldsViewModel;
	MNBusinessImageViewModel* _qrCodeHeaderImageViewModel;
	MNBusinessImageViewModel* _qrCodeImageViewModel;
	MNBusinessLabelViewModel* _shareButtonLabelViewModel;
	MNBusinessLabelViewModel* _messageAirlineButtonLabelViewModel;
	UIColor* _backgroundColor;
	NSString* _airlinePageID;
	FBMMessage* _forwardableMessage;
	NSArray* _imageURLStringsToPreDownload;

}

@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * doubleImageHeaderViewModel;                      //@synthesize doubleImageHeaderViewModel=_doubleImageHeaderViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * passengerAndOptionalFieldViewModel;              //@synthesize passengerAndOptionalFieldViewModel=_passengerAndOptionalFieldViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesFlightInfoSectionViewModel * flightInfoSectionViewModel;                     //@synthesize flightInfoSectionViewModel=_flightInfoSectionViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * firstRowFieldsViewModel;                         //@synthesize firstRowFieldsViewModel=_firstRowFieldsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * secondRowFieldsViewModel;                        //@synthesize secondRowFieldsViewModel=_secondRowFieldsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessImageViewModel * qrCodeHeaderImageViewModel;                                 //@synthesize qrCodeHeaderImageViewModel=_qrCodeHeaderImageViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessImageViewModel * qrCodeImageViewModel;                                       //@synthesize qrCodeImageViewModel=_qrCodeImageViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * shareButtonLabelViewModel;                                  //@synthesize shareButtonLabelViewModel=_shareButtonLabelViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * messageAirlineButtonLabelViewModel;                         //@synthesize messageAirlineButtonLabelViewModel=_messageAirlineButtonLabelViewModel - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * airlinePageID;                                                              //@synthesize airlinePageID=_airlinePageID - In the implementation block
@property (nonatomic,copy,readonly) FBMMessage * forwardableMessage;                                                       //@synthesize forwardableMessage=_forwardableMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageURLStringsToPreDownload;                                                //@synthesize imageURLStringsToPreDownload=_imageURLStringsToPreDownload - In the implementation block
-(id)initWithDoubleImageHeaderViewModel:(id)arg1 passengerAndOptionalFieldViewModel:(id)arg2 flightInfoSectionViewModel:(id)arg3 firstRowFieldsViewModel:(id)arg4 secondRowFieldsViewModel:(id)arg5 qrCodeHeaderImageViewModel:(id)arg6 qrCodeImageViewModel:(id)arg7 shareButtonLabelViewModel:(id)arg8 messageAirlineButtonLabelViewModel:(id)arg9 backgroundColor:(id)arg10 airlinePageID:(id)arg11 forwardableMessage:(id)arg12 imageURLStringsToPreDownload:(id)arg13 ;
-(MNBusinessStackedContainerViewModel *)doubleImageHeaderViewModel;
-(MNBusinessStackedContainerViewModel *)passengerAndOptionalFieldViewModel;
-(MNAirlinesFlightInfoSectionViewModel *)flightInfoSectionViewModel;
-(MNBusinessStackedContainerViewModel *)firstRowFieldsViewModel;
-(MNBusinessStackedContainerViewModel *)secondRowFieldsViewModel;
-(MNBusinessImageViewModel *)qrCodeHeaderImageViewModel;
-(MNBusinessImageViewModel *)qrCodeImageViewModel;
-(MNBusinessLabelViewModel *)shareButtonLabelViewModel;
-(MNBusinessLabelViewModel *)messageAirlineButtonLabelViewModel;
-(NSString *)airlinePageID;
-(FBMMessage *)forwardableMessage;
-(NSArray *)imageURLStringsToPreDownload;
-(UIColor *)backgroundColor;
@end

