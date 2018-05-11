//
//  AMApiManager.h
//  AnyMeetUIKit
//
//  Created by derek on 2018/5/11.
//  Copyright © 2018年 derek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AMApiCommon.h"
#import "AMUserModel.h"
#import "AMMeetInfoModel.h"
#import "AMMeetListModel.h"

typedef void(^CompleteBlock)(int code);
typedef void(^FailBlock)(NSError *error);

@interface AMApiManager : NSObject

+(AMApiManager*)shareInstance;

//注册成功后，系统给予的用户Id
@property (nonatomic, strong,readonly) NSString *anyUserId;

//用户对接
- (void)registeredDockingMeeting:(AMUserModel*)userModel
                         success:(CompleteBlock)successBlock
                         failure:(FailBlock)failureBlock;
//创建房间
- (void)createMeetingRoom:(NSString*)meetingName
             withMeetType:(AMMeetType)type
        withMeetStartTime:(NSString*)startTime
             withPassWord:(NSString*)passWord
            withLimitType:(AMMeetLimitType)limitType
    withDefaultPersonList:(NSArray*)personList
                  success:(CompleteBlock)successBlock
                  failure:(FailBlock)failureBlock;

//删除会议
- (void)deleteMeetingRoom:(NSString*)meetingId
                  success:(CompleteBlock)successBlock
                  failure:(FailBlock)failureBlock;

//获取会议详情
typedef void(^GetMeetInfoBlock)(AMMeetInfoModel *model,int code);
- (void)getMeetingInfo:(NSString*)meetingId
               success:(GetMeetInfoBlock)successBlock
               failure:(FailBlock)failureBlock;
//更新会议时间
- (void)updateMeetingStartTime:(NSString*)meetingId
           withUpdateStartTime:(NSString*)startTime
                       success:(CompleteBlock)successBlock
                       failure:(FailBlock)failureBlock;

//获取会议列表
typedef void(^GetMeetListBlock)(AMMeetListModel*model,int code);
- (void)getUserMeetingListWithPageNum:(int)pageNum
                         withPageSize:(int)pageSize
                              success:(GetMeetListBlock)successBlock
                              failure:(FailBlock)failureBlock;

//邀请参会人员
- (void)inviteMeetingMember:(NSString*)meetingId
       withInvitePersonList:(NSArray*)personList
                    success:(CompleteBlock)successBlock
                    failure:(FailBlock)failureBlock;
//删除踢出参会人员
- (void)deleteMeetingMember:(NSString*)meetingId
       withDeletePersonList:(NSArray*)personList
                    success:(CompleteBlock)successBlock
                    failure:(FailBlock)failureBlock;

//获取邀请过的参会人员列表
typedef void(GetInviteMembersBlock)(NSArray<Memberlist *> * memberlist,int code);
- (void)getInviteMemberList:(NSString*)meetingId
                    success:(GetInviteMembersBlock)successBlock
                    failure:(FailBlock)failureBlock;

//获取错误码
- (NSString *)getErrorInfoWithCode:(int)nCode;

@end
