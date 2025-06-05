#include <stdio.h>
#include <stdbool.h>

int H, W;
int r, c, d;
int A[64][64], B[64][64];
bool dust[64][64];
bool visited[64][64][4];

void clearVisited() {
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            for(int k = 0; k < 4; k++) {
                visited[i][j][k] = false;
            }
        }
    }
}

int main() {
    // 1) 입력받기
    scanf("%d %d", &H, &W);
    scanf("%d %d %d", &r, &c, &d);
    // 규칙표 A 읽기
    for(int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            scanf("%1d", &A[i][j]);
        }
    }
    // 규칙표 B 읽기
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            scanf("%1d", &B[i][j]);
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            dust[i][j] = true;
        }
    }

    clearVisited();

    int moveCount = 0;
    int dir = d * 90;
    // 4) 시뮬레이션 시작
    while (true) {
        if (dust[r][c]) {
            // ── (1) 현재 칸에 먼지가 있으면 ◯ 먼지 제거
            dust[r][c] = false;
            // ── 먼지 제거했으므로, “방문 기록 전체”를 초기화
            clearVisited();
            // ── (a) 규칙표 A를 참고해서 방향 회전
            dir = dir + A[r][c] * 90;
        }
        else {
            // ── (2) 현재 칸에 먼지가 없으면 “무의미한 이동”인지 확인
            if (visited[r][c][d]) {
                // 이미 같은 칸, 같은 방향으로 들어온 적이 있다 ⇒ 앞으로도 먼지를 못 치꿈
                break;  // 시뮬레이션 종료
            }
            // 이 칸, 이 방향으로 진입한 적이 없으므로 방문 기록 표시
            visited[r][c][d] = true;
            // ── (b) 규칙표 B를 참고해서 방향 회전
            dir = dir + B[r][c] * 90;
        }

        if (dir >= 360)
        {
            dir -= 360;
        }
        // 5) 방향을 회전한 뒤, 한 칸 전진할 좌표 계산

        switch (dir)
        {
        case 0: // North
            r--;
            break;
        case 90: // East
            c++;
            break;
        case 180: // South
            r++;
            break;
        case 270: // West
            c--;
            break;
        }

        // 6) 격자 밖으로 나가는지 검사
        if (r < 0 || r >= H || c < 0 || c >= W) {
            moveCount += 1;  // “밖으로 나가는 한 칸 이동”은 이동 횟수에 포함
            break;           // 종료
        }

        // 7) 격자 안이라면, 한 칸 이동 (이동 횟수 +1)
        moveCount += 1;
    }

    // 8) 결과 출력
    printf("%d\n", moveCount);
    return 0;
}
