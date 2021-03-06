/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRideServiceMessageMapViewModel, MNBusinessSeparatorViewModel, MNBusinessLogoViewModel, MNBusinessStackedContainerViewModel, MNBusinessTableRowViewModel, NSURL;

@interface MNRideServiceMessageReceiptViewModel : FBValueObject <NSCopying> {

	MNRideServiceMessageMapViewModel* _map;
	MNBusinessSeparatorViewModel* _mapBottomLine;
	MNBusinessLogoViewModel* _logo;
	MNBusinessStackedContainerViewModel* _locations;
	MNBusinessStackedContainerViewModel* _rideInfo;
	MNBusinessSeparatorViewModel* _footerSeparator;
	MNBusinessTableRowViewModel* _footer;
	NSURL* _receiptURL;

}

@property (nonatomic,copy,readonly) MNRideServiceMessageMapViewModel * map;                       //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessSeparatorViewModel * mapBottomLine;                 //@synthesize mapBottomLine=_mapBottomLine - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * logo;                               //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * rideInfo;               //@synthesize rideInfo=_rideInfo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessSeparatorViewModel * footerSeparator;               //@synthesize footerSeparator=_footerSeparator - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowViewModel * footer;                         //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSURL * receiptURL;                                           //@synthesize receiptURL=_receiptURL - In the implementation block
-(id)initWithMap:(id)arg1 mapBottomLine:(id)arg2 logo:(id)arg3 locations:(id)arg4 rideInfo:(id)arg5 footerSeparator:(id)arg6 footer:(id)arg7 receiptURL:(id)arg8 ;
-(MNBusinessSeparatorViewModel *)mapBottomLine;
-(MNBusinessStackedContainerViewModel *)rideInfo;
-(MNBusinessSeparatorViewModel *)footerSeparator;
-(NSURL *)receiptURL;
-(MNRideServiceMessageMapViewModel *)map;
-(MNBusinessLogoViewModel *)logo;
-(MNBusinessStackedContainerViewModel *)locations;
-(MNBusinessTableRowViewModel *)footer;
@end

