/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSString;

@interface FNFDashTimelineEntry : NSObject {

	NSMutableDictionary* _urls;
	NSString* _defaultRepresentation;
	NSString* _selectedRepresentationId;
	SCD_Struct_FB44 _range;

}

@property (nonatomic,readonly) SCD_Struct_FB44 range;                                 //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedRepresentationId;              //@synthesize selectedRepresentationId=_selectedRepresentationId - In the implementation block
-(NSString *)selectedRepresentationId;
-(id)availableRepresentations;
-(void)selectRepresentation:(id)arg1 ;
-(void)addUrl:(id)arg1 representation:(id)arg2 ;
-(id)url;
-(SCD_Struct_FB44)range;
-(id)defaultRepresentation;
-(id)initWithRange:(SCD_Struct_FB44)arg1 ;
@end

