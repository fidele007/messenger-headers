/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncGenericMapValue, MNMessagesSyncGenericMapMutation, NSString;

@interface MNMessagesSyncGenericMapMutationOp : NSObject <TBase, NSCoding> {

	MNMessagesSyncGenericMapValue* __newValue;
	MNMessagesSyncGenericMapMutation* __mutation;
	BOOL __newValue_isset;
	BOOL __mutation_isset;

}

@property (setter=setNewValue:,getter=newValue,nonatomic,retain) MNMessagesSyncGenericMapValue * newValue; 
@property (setter=setMutation:,getter=mutation,nonatomic,retain) MNMessagesSyncGenericMapMutation * mutation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setMutation:(MNMessagesSyncGenericMapMutation *)arg1 ;
-(MNMessagesSyncGenericMapMutation *)mutation;
-(BOOL)mutationIsSet;
-(void)unsetMutation;
-(id)initWithNewValue:(id)arg1 mutation:(id)arg2 ;
-(BOOL)newValueIsSet;
-(void)unsetNewValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(MNMessagesSyncGenericMapValue *)newValue;
-(void)setNewValue:(MNMessagesSyncGenericMapValue *)arg1 ;
-(void)write:(id)arg1 ;
@end

