/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVSPDeltaPinCode : NSObject <TBase, NSCoding> {

	long long __pinFbId;
	BOOL __paymentsProtected;
	BOOL __pinFbId_isset;
	BOOL __paymentsProtected_isset;

}

@property (assign,setter=setPinFbId:,getter=pinFbId,nonatomic) long long pinFbId; 
@property (assign,setter=setPaymentsProtected:,getter=paymentsProtected,nonatomic) BOOL paymentsProtected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)pinFbIdIsSet;
-(void)read:(id)arg1 ;
-(void)setPinFbId:(long long)arg1 ;
-(void)setPaymentsProtected:(BOOL)arg1 ;
-(id)initWithPinFbId:(long long)arg1 paymentsProtected:(BOOL)arg2 ;
-(long long)pinFbId;
-(void)unsetPinFbId;
-(BOOL)paymentsProtected;
-(BOOL)paymentsProtectedIsSet;
-(void)unsetPaymentsProtected;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

