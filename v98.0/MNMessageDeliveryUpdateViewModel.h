/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNCommerceMapViewModel, MNBusinessLogoViewModel, MNCommerceListViewModel, NSURL;

@interface MNMessageDeliveryUpdateViewModel : FBValueObject <NSCopying> {

	NSString* _shipmentID;
	long long _type;
	NSString* _bubbleStyle;
	MNCommerceMapViewModel* _map;
	MNBusinessLogoViewModel* _carrierLogo;
	NSString* _shipmentMethod;
	NSString* _shippedDateString;
	NSString* _estimatedDeliveryDateString;
	NSString* _delayedDeliveryDateString;
	NSString* _trackingEventDateString;
	MNCommerceListViewModel* _itemList;
	NSURL* _trackingURL;
	NSString* _senderID;

}

@property (nonatomic,copy,readonly) NSString * shipmentID;                               //@synthesize shipmentID=_shipmentID - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleStyle;                              //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceMapViewModel * map;                        //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * carrierLogo;               //@synthesize carrierLogo=_carrierLogo - In the implementation block
@property (nonatomic,copy,readonly) NSString * shipmentMethod;                           //@synthesize shipmentMethod=_shipmentMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * shippedDateString;                        //@synthesize shippedDateString=_shippedDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * estimatedDeliveryDateString;              //@synthesize estimatedDeliveryDateString=_estimatedDeliveryDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * delayedDeliveryDateString;                //@synthesize delayedDeliveryDateString=_delayedDeliveryDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackingEventDateString;                  //@synthesize trackingEventDateString=_trackingEventDateString - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceListViewModel * itemList;                  //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,copy,readonly) NSURL * trackingURL;                                 //@synthesize trackingURL=_trackingURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderID;                                 //@synthesize senderID=_senderID - In the implementation block
-(NSString *)bubbleStyle;
-(id)initWithShipmentID:(id)arg1 type:(long long)arg2 bubbleStyle:(id)arg3 map:(id)arg4 carrierLogo:(id)arg5 shipmentMethod:(id)arg6 shippedDateString:(id)arg7 estimatedDeliveryDateString:(id)arg8 delayedDeliveryDateString:(id)arg9 trackingEventDateString:(id)arg10 itemList:(id)arg11 trackingURL:(id)arg12 senderID:(id)arg13 ;
-(NSString *)shipmentID;
-(MNBusinessLogoViewModel *)carrierLogo;
-(NSString *)shipmentMethod;
-(NSString *)shippedDateString;
-(NSString *)estimatedDeliveryDateString;
-(NSString *)delayedDeliveryDateString;
-(NSString *)trackingEventDateString;
-(NSURL *)trackingURL;
-(long long)type;
-(MNCommerceMapViewModel *)map;
-(NSString *)senderID;
-(MNCommerceListViewModel *)itemList;
@end

