/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBContactImporterAddressbookPersonCredential <NSObject>
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@required
-(id)initWithValue:(CFStringRef)arg1 ABRecordLabel:(CFStringRef)arg2;
-(BOOL)isBetterChoiceForPrimaryCredentialThan:(id)arg1;
-(NSString *)value;
-(NSString *)label;
-(id)initWithValue:(CFStringRef)arg1;

@end
